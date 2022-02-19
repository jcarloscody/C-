import { Component, OnInit } from '@angular/core';
import { Observable } from 'rxjs';
import { CharactersApiService } from '../characters/character/shared/characters-api.service';

@Component({
  selector: 'app-stories',
  templateUrl: './stories.component.html',
  styleUrls: ['./stories.component.css']
})
export class StoriesComponent implements OnInit {

  
  allStories!: Observable<any>;

  constructor(private serviceApiM: CharactersApiService) { }

  ngOnInit(): void {
    this.allStories = this.serviceApiM.getAllStories();
  }

}
