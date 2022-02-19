import { CharactersApiService } from './../characters/character/shared/characters-api.service';
import { Component, OnInit } from '@angular/core';
import { Observable } from 'rxjs';

@Component({
  selector: 'app-comics',
  templateUrl: './comics.component.html',
  styleUrls: ['./comics.component.css']
})
export class ComicsComponent implements OnInit {

  allComics!: Observable<any>;

  constructor(private characterSvc: CharactersApiService) { }

  ngOnInit(): void {
    this.getComics();
  }

  getComics(){
    this.allComics =  this.characterSvc.getAllComics();
  }
}
